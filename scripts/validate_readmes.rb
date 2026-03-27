#!/usr/bin/env ruby
# frozen_string_literal: true

root = File.expand_path("..", __dir__)
readme_paths = Dir.glob(File.join(root, "README*.md")).sort
readme_files = readme_paths.map { |path| File.basename(path) }
translation_files = readme_files.grep(/^README-.+\.md$/).sort
readme_link_pattern = /href="\.\/(README[^"]+\.md)"/

errors = []

readme_paths.each do |path|
  basename = File.basename(path)
  content = File.read(path)
  linked_files = content.scan(readme_link_pattern).flatten
  missing_targets = linked_files.reject { |target| readme_files.include?(target) }.uniq

  next if missing_targets.empty?

  errors << "#{basename} links to missing README files: #{missing_targets.join(', ')}"
end

main_readme_path = File.join(root, "README.md")
main_readme_links = File.read(main_readme_path).scan(readme_link_pattern).flatten.uniq
missing_from_main = translation_files.reject { |target| main_readme_links.include?(target) }

unless missing_from_main.empty?
  errors << "README.md is missing language-picker entries for: #{missing_from_main.join(', ')}"
end

if errors.empty?
  puts "README validation passed for #{readme_files.length} files."
  exit 0
end

warn "README validation failed:"
errors.each { |error| warn "- #{error}" }
exit 1
