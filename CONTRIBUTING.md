# Contributor's Guide

'HOW TO CONTRIBUTE TO OPEN SOURCE' accepts PR's (pull requests) from **newbies**
only. This is to help **newbies** get familiar with the contribution processes.

Issues can be submitted by anyone - either seasoned developers or newbies.

**Contents**

- [Getting Started](#getting-started)
- [Submitting a Pull Request](#submitting-a-pull-request)
- [Adding to the Main README](#adding-to-the-main-readme)
- [Adding to Non-English README](#adding-to-non-english-readme)
- [Adding to the Project File](#adding-to-the-project-file)
- [Helpful Resources](#helpful-resources)

### Getting Started

1.  If you are new to Git and GitHub, it is advisable that you go through
    [GitHub For Beginners](http://readwrite.com/2013/09/30/understanding-github-a-journey-for-beginners-part-1/)
    **before** moving to Step 2.

2.  Fork the project on GitHub.
    [Help Guide to Fork a Repository](https://help.github.com/en/articles/fork-a-repo/).

    ![Illustration for How to Fork a Repository](https://hisham.hm/img/posts/github-fork.png)

3.  Clone the project.
    [Help Guide to Clone a Repository](https://help.github.com/en/articles/cloning-a-repository)

4.  Create a branch specific to the issue you are working on.

    ```shell
    git checkout -b update-readme-file
    ```

    For clarity, name
    your branch `update-xxx` or `fix-xxx`. The `xxx` is a short
    description of the changes you're making. Examples include `update-readme` or
    `fix-typo-on-contribution-md`.

5.  Open up the project in your favorite text editor, select the file you want
    to contribute to, and make your changes.

    If you are making changes to the `README.md` file, you would need to have
    Markdown knowledge. Visit
    [here to read about GitHub Markdown](https://guides.github.com/features/mastering-markdown/)
    and
    [here to practice](http://www.markdowntutorial.com/).

    *   If you are adding a new project/organization to the README, make sure
        it's listed in alphabetical order.
    *   If you are adding a new organization, make sure you add an organization
        label to the organization name. This would help distinguish projects
        from organizations.

6.  Add your modified
    files to Git, [How to Add, Commit, Push, and Go](http://readwrite.com/2013/10/02/github-for-beginners-part-2/).

    ```shell
    git add path/to/filename.ext
    ```

    You can also add all unstaged files using:

    ```shell
    git add .
    ```

    **Note:** using a `git add .` will automatically add all files. You can do a
    `git status` to see your changes, but do it **before** `git add`.

6.  Commit your changes using a descriptive commit message.

    ```shell
    git commit -m "Brief Description of Commit"
    ```

7.  Push your commits to your GitHub Fork:

    ```shell
    git push -u origin branch-name
    ```

8.  Submit a pull request.

    Within GitHub, visit this main repository and you should see a banner
    suggesting that you make a pull request. While you're writing up the pull
    request, you can add `Closes #XXX` in the message body where `#XXX` is the
    issue you're fixing. Therefore, an example would be `Closes #42` would close issue
    `#42`.

### Submitting a Pull Request

[What is a Pull Request?](https://yangsu.github.io/pull-request-tutorial/)

If you decide to fix an issue, it's advisable to check the comment thread to see if there's somebody already working on a fix. If no one is working on it, kindly leave a comment stating that you intend to work on it. By doing that,
other people don't accidentally duplicate your effort.

In a situation where somebody decides to fix an issue but doesn't follow up
for a particular period of time, say 2-3 weeks, it's acceptable to still pick
up the issue but make sure that you leave a comment.

*Note*: Every open-source project has a **CONTRIBUTING.md** file, please make
sure to read this before you open up a pull request; otherwise, it may be
rejected. However, if you do not see any CONTRIBUTING.md file, you can send a
pull request but do it in a descriptive manner.

### Adding to the Main README

The
[main `README.md` file](https://github.com/freeCodeCamp/how-to-contribute-to-open-source/blob/master/README.md)
contains a list of useful resources for beginners who want to contribute to
open source.

You can contribute to this page by adding a Markdown-formatted link.

It should look similar to the one below.

```
- [Title of the page](www.websitename.com/slug-name-here) - Add a description of why I should look at this site
```

When in doubt, take a look at the current list of items to get an idea of how you should format your contribution.

When adding your contribution to the list, please add your link to the most appropriate section. If you are unsure, feel free to ask in your pull request or comment in an issue asking for guidance.

### Adding to Non-English README

The main `README.md` file is written in English. That file will be the template for all of the other languages.

This repository is about contributing to open source and generally, translation is important to reach diverse audiences. It is recommended that you provide language-specific resources links instead of the English-resource links.

The non-English README files are named `README-XX.md`, where `xx` is the
[two letter language code](https://en.wikipedia.org/wiki/List_of_ISO_639-1_codes)
for the language.

You can contribute to the non-English README files by taking links that are in the English README but are not in the language of your choosing. When making a pull request with these changes, please tag someone who can verify your language contribution by adding `@` in front of their GitHub username to the pull request.

If your language does not exist yet, feel free to start it yourself. If you decide to do this, please add more than just the title. If you do not have the time to create one, feel free to
[create an issue](https://github.com/freeCodeCamp/how-to-contribute-to-open-source/issues/new/choose)
to crowdsource help.

### Adding to the Project File

We have a
[`PROJECT.md`](https://github.com/freeCodeCamp/how-to-contribute-to-open-source/blob/master/PROJECTS.md)
file to help curate a list of projects and organizations that are friendly to contributions.

If you know of a project or organization that fits this description, feel free to add them to this list.

The list is generally formatted like below.

```
- [freeCodeCamp](https://www.freecodecamp.org/) (org)
    - [freeCodeCamp](https://github.com/freeCodeCamp/freeCodeCamp/) (project)
        - [Contributing guide](https://github.com/freeCodeCamp/freeCodeCamp/blob/master/CONTRIBUTING.md)
        - Issue labels:
            - [first-timers-only](https://github.com/FreeCodeCamp/FreeCodeCamp/issues?q=is%3Aopen+is%3Aissue+label%3Afirst-timers-only)
```

So you have the project page itself at the top. This can be the front-facing website or GitHub page.

Next, we ask to link to the contributing page. This will give direction to people who want to contribute. This file is important to read so that you understand what is expected from contributors who have not contributed to their project before.

Lastly, we want to link to beginner-friendly labels. These are typically `Good First Issue` or something similar.

### Helpful Resources

- [Pro GIT Book](https://git-scm.com/book/en/v2)

- [Try Git](https://try.github.io/)

- [Git/ Git Hub on Windows](https://www.youtube.com/watch?v=J_Clau1bYco)
