# Contributor's Guide

HOW TO CONTRIBUTE TO OPEN SOURCE accepts PR's(pull requests) from **newbies**
only, this is to help **newbies** get familiar with contribution processes.

Issues can be submitted by anyone, seasoned developers or newbies.

### Getting Started

1.  If you are new to Git and Github, it is advisable you go through [this
    link](http://readwrite.com/2013/09/30/understanding-github-a-journey-for-beginners-part-1/)
    before moving to the next step.

2.  Fork the project on Github, [Help Guide to Fork a repository](https://help.github.com/articles/fork-a-repo/).
[![Screen Shot 2016-10-06 at 11.46.47 PM.png](https://s13.postimg.org/5yvhu7vpz/Screen_Shot_2016_10_06_at_11_46_47_PM.png)](https://postimg.org/image/6oea6kw9f/)
3.  Clone the project.
4.  Create a branch specific to the issue you are working on.

    ```shell
    git checkout -b update-readme-file
    ```

    For clarity to yourself and others on the issue you're working on, name
    your branch something like `update-xxx` or `fix-xxx` where `xxx` is a short
    description of the changes you're making. For example `update-readme` or
    `fix-typo-on-contribution-md`.

5.  Open up the project in your favourite text editor, select the file you want
    to contribute to and make your changes.

    If you are making changes to the README.md file, you would need to have
    Markdown knowledge. Visit [here to read about Github
    Markdown](https://guides.github.com/features/mastering-markdown/) and [here
    to practice](http://www.markdowntutorial.com/)

    *   If you are adding a new project/organisation to the README, make sure
        it's listed in alphabetical order.
    *   If you are adding a new organisation, make sure you add an organisation
        label to the organisation name. This would help distinguish projects
        from organisation projects.

6.  After making your changes in the new git branch then add your modified
    files to git, [How to add, commit, push and
    go](http://readwrite.com/2013/10/02/github-for-beginners-part-2/)

    ```shell
    git add path/to/filename.ext
    ```

    You can also add all unstaged files using:

    ```shell
    git add .
    ```

    Note, using a `git add .` will automatically add all files. You can do a
    `git status` to see your changes, but do it before `git add`.

6.  Commit your changes using a descriptive commit message.

    ```shell
    git commit -m "Brief Description of Commit"
    ```

7.  Push your commits to your Github Fork:

    ```shell
    git push -u origin branch-name
    ```

8.  Submit a pull request.

    Within GitHub, visit this main repository and you should see a banner
    suggesting to make a pull request. While you're writing up the pull
    request, you can add `Closes #XXX` in the message body where `#XXX` is the
    issue you're fixing. So an example would be `Closes #42` would close issue
    `#42`.

### Submitting a Pull Request

What is a pull request?
[Visit link](https://yangsu.github.io/pull-request-tutorial/)

If you decide to fix an issue, it's advisable to check the comment thread in
case there's somebody already working on a fix. If no one is working on it at
the moment, kindly leave a comment stating that you intend to work on it so
other people don't accidentally duplicate your effort.

In a situation whereby somebody decides to fix an issue but doesn't follow up
for a particular period of time, say 2-3 weeks, it's acceptable to still pick
up the issue but make sure to leave a comment.

*Note*: Every open-source project has a **CONTRIBUTING.md** file, please make
sure to read this before you open up a pull request, otherwise it may be
rejected. However, if you do not see any CONTRIBUTING.md file, you can send a
pull request but do it in a descriptive manner.

### Helpful Resources

- [Pro GIT Book](https://git-scm.com/book/en/v2)

- [Try Git](https://try.github.io/)

- [Git/ Git Hub on Windows](https://www.youtube.com/watch?v=J_Clau1bYco)
