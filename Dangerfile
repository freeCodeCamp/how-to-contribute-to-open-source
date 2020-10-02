# Ensure there is a summary for a pull request
fail 'Please provide a summary in the Pull Request description' if github.pr_body.length < 5

# Check links
require 'json'
results = File.read 'ab-results-README.md-markdown-table.json'
j = JSON.parse results
if j['error']==true
  m = j['title']
  m << ', `@freeCodeCamp/moderators` will take care of these, thanks :)'
  warn m
  markdown j['message']
end
