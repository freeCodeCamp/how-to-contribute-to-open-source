# Contributor's Guide

HOW TO CONTRIBUTE TO OPEN SOURCE accepts PR's(pull requests) from **newbies** only, this is to help **newbies** get familiar with contribution processes.

Issues can be submitted by anyone, seasoned developers or newbies.

### Getting Started

1.  If you are new to Git and Github, it is advisable you go through [this link](http://readwrite.com/2013/09/30/understanding-github-a-journey-for-beginners-part-1/) before moving to the next step.

2.  Fork the project on Github, [Help Guide to Fork a repository](https://help.github.com/articles/fork-a-repo/).
[![Screen Shot 2016-10-06 at 11.46.47 PM.png](https://s13.postimg.org/5yvhu7vpz/Screen_Shot_2016_10_06_at_11_46_47_PM.png)](https://postimg.org/image/6oea6kw9f/)
3.  Clone the project.
4.  Create a branch specific to the issue you are working on.
    
    ```
    git checkout -b update-readme-file
    ```
    For clarity to yourself and others on the issue you're working on, name your branch something like `update-xxx` or `fix-xxx` where `xxx` is a short description of the changes you're making. For example `update-readme` or `fix-typo-on-contribution-md`.    
5.  Make your changes in the new git branch then add your modified files to git, [How to add, commit, push and go](http://readwrite.com/2013/10/02/github-for-beginners-part-2/) 
    
    ```
    git add path/to/filename.ext
    ```

    You can also add all unstaged files using: 
    
    ```
    git add .
    ``` 

    Note, using a `git add .` will automatically add all files. You can do a `git status` to see your changes, but do it before `git add`.

5.  Commit your changes using a descriptive commit message.
    
    ```
    git commit -m "Brief Description of Commit"
    ```
6.  Push your commits to your Github Fork: 
    
    ```
    git push -u origin branch-name
    ```
7.  Submit a pull request.

### Submitting a Pull Request

What is a pull request? [visit link](https://yangsu.github.io/pull-request-tutorial/)

If you decide to fix an issue, it's advisable to check the comment thread in case there's somebody already working on a fix. If no-one is working on it at the moment, kindly leave a comment stating that you intend to work on it so other people don't accidentally duplicate your effort.

In a situation where by somebody decides to fix an issue but doesn't follow up for a particular period of time, say 2-3weeks, it's acceptable to still pick up the issue but make sure to leave a comment.

--
*Note*: Every open-source project has a **CONTRIBUTING.md** file, please make sure to read theirs before you open up a pull request, otherwise your pull request may be rejected.
However if you do not see any contributing.md file, you can send a pull request but do it in a descriptive manner.

### Helpful Resources
-    [Pro GIT Book](https://git-scm.com/book/en/v2)

-    [Try Git](https://try.github.io/)
