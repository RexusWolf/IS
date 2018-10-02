# ![Git logo](../Pics/gitlogo.png) Git Tutorial

[**Visit the website.**](https://git-scm.com/)<br>

*Git* is a version control system for **tracking changes** in computer files and coordinating work on those files among multiple people.

In this guide, we will teach you the essential knowledge of git a
how to work with it.
### Table of Contents
**[Starting in Git](#starting-in-git)**<br>
**[Git Configuration](#how-to-configure-git)**<br>
**[The three steins-gate of Git](#the-three-steins-gate-of-git)**<br>
**[Basic commands](#basic-commands-on-git)**<br>
**[Git & Github](#git--github)**<br>
## **Starting in Git**

### **Some advantages of using Git**
* The ability to do and undo changes.
* History and documentations of different changes.
* Using of multiple versions of the same code at once.
* The ability to solve conflicts between version of different programmers.

![gitgif](https://tudip.com/wp-content/uploads/2017/12/git-rebase-master.gif)

## **How To Configure Git**

First of all, we will set the administrator name, email, core editor, interface, etc.

1. Change *Administrator name*
~~~
git config --global user.name "Admin Name"
~~~

2. Change *Email*
~~~
git config --global user.email name@mail.com
~~~

3. Choose your core *text editor*.
~~~
git config --global core.editor "atom"
~~~

4. Set the interface color
~~~
git config --global color.ui true
~~~

4. Show the configuration list
~~~
git config --list
~~~

## **The three states of Git**

Typically, you’ll want to start making changes and **committing** snapshots of those changes into your *repository* each time the project reaches a state you want to record.

Remember that each file in your working directory can be in one of two states: **tracked or untracked**. Tracked files are files that were in the last snapshot; they can be unmodified, modified, or staged. In short, tracked files are files that Git knows about.

![Git status](https://git-scm.com/book/en/v2/images/lifecycle.png)

Untracked files are everything else — any files in your working directory that were not in your last snapshot and are not in your staging area. When you first **clone** a repository, all of your files will be tracked and unmodified because Git just checked them out and you haven’t edited anything.

As you edit files, Git sees them as *modified*, because you’ve changed them since your last commit. As you work, you selectively stage these modified files and then commit all those **staged changes**, and the cycle repeats.



## **Basic commands on Git**

Now we're going to show you some of the most basic commands to use **Git**, first of all, we need to start a repository...

To start a repository, we have to be in the directory we wan to use and use the command:
~~~
git init
~~~

To add changes to the staging area we use: `git add`
If you want to add all the content: `git add .`

To validate the changes we use:
~~~
git commit -m "message"
~~~
With this step we've sent the changes to the git repository.

If you want to do the two steps before, faster, you can use:
~~~
git commit -am "message"
~~~

To check the commit history:
~~~
git log
~~~

For some help:
~~~
git log help
~~~

For the last 5 commits:
~~~
git log -n 5
~~~

For a date:
~~~
git log --since=2018-09-27
~~~

to listate for an author:
~~~
git log --author="Manuel Alejandro"
~~~
To see the changes in the directory:
~~~
git status
~~~

To see the diferences between the file in the directory and the file in the **Git** repository:
~~~
git diff
~~~

To see the diferences between the file in the staging and the file in the **Git** repository:
~~~
git diff --staged
~~~

To remove files:
~~~
git rm file
git commit -m "message"
~~~

To move o rename files:
~~~
git mv old new
git commit -m "message"
~~~

To undo changes with **Git**:
~~~
git checkout -- file_name
~~~

Remove file from staging:
~~~
git reset HEAD file_name
~~~

Compliment the last commit:
~~~
git commit --amend -m "message"
~~~

Recover versions from a file of a old commit:
~~~
git checkout <id_commit> -- file_name
~~~

Revert a commit:
~~~
git revert <id_commit>
~~~

Undo multiple changes in the repository:
~~~
git reset --soft <id_commit>
git reset --mixed <id_commit>
git reset --hard <id_commit>
~~~

List the files that git don't control:
~~~
git clean -n
~~~

Ignore the file in the directory:
~~~
.gitignore
~~~

List the content of the repository from git:
~~~
git ls-tree master
git ls-tree master^^^
git ls-tree master~3
~~~

Log in a line:
~~~
git log --oneline
~~~

Log with the 3 last commit in a line:
~~~
git log --oneline -3
~~~

Examinate the content of a commit:
~~~
git show <id>
~~~

Compare a commit with the actual:
~~~
git diff <id> file_name
~~~

Compare two commits:
~~~
git diff id ... id file_name
~~~

Clone a repository:
~~~
git clone "repository url"
~~~

## **Git & Github**

*GitHub Inc.* is a web-based hosting service for version control using Git.
That's it, Git is the sofware that allows you to **track and host** versions of files on Github. In other words, you use commands of Git to track versions of your files. And Github is just a remote platform where these files are hosted.
 ![Gitnotgithub](https://cdn-images-1.medium.com/max/1600/1*l_rZs-gPQ1wzEdfyrtidww.png)
If you want to know more about Github, you can visit our [Github tutorial](https://github.com/RexusWolf/IS/blob/master/p1/tutorial_github.md) and give us some feedback.
