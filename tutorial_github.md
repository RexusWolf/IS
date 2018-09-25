# ![Tutorial Github](http://jalexy.info/images/github.png)**Github Tutorial**

[**Visit the website.**](http://github.com)<br>

*GitHub* is a code hosting platform for version control and collaboration using **Git**. It lets you and others work together on projects from anywhere.

This tutorial teaches you GitHub essentials like repositories, branches, commits, and Pull Requests. You’ll learn GitHub’s Pull Request workflow, a popular way to create and review code.

![Github workflow](https://marketplace-cdn.atlassian.com/files/images/cec44feb-0b1b-4fe3-936d-67a51a1fe28e.png)

### Table of Contents
**[Starting in Github](#starting-in-github)**<br>
**[Usage Instructions](#usage-instructions)**<br>
**[Troubleshooting](#troubleshooting)**<br>
**[Compatibility](#compatibility)**<br>
**[Notes and Miscellaneous](#notes-and-miscellaneous)**<br>

## Starting in Github

To complete this tutorial, you need a GitHub.com account and Internet access. You don’t need to know how to code, use the command line, or install Git (the version control software GitHub is built on). To install Git you can follow our [Git Tutorial](https://github.com/RexusWolf/IS/blob/master/tutorial_git.md).

# **Step 1. Create a repository**

A repository is usually used to organize a single project. Repositories can contain folders and files, images, videos, spreadsheets, and data sets – anything your project needs. We recommend including a README, or a file with information about your project, as we [did here](https://github.com/RexusWolf/IS/blob/master/README.md). GitHub makes it easy to add one at the same time you create your new repository but you can also create it using your source code editor. It also offers other common options such as a license file.

Your repository can be a place where you store ideas, resources, or even share and discuss things with others and cowork with them.

## **To create a new repository**
1. In the upper right corner, next to your avatar or identicon, click
2. and then select **New repository**.
3. Name your repository.
4. Write a short description.
5. Select **Initialize this repository with a README**.
6. Click **Create repository**.

![repository](https://guides.github.com/activities/hello-world/create-new-repo.png)

# **Step 2. Create a branch**

**Branching** is the way to work on different versions of a repository at one time.

By default your repository has one branch named `master` which is considered to be the definitive branch. We use branches to experiment and make edits before committing them to master.

When you create a branch off the `master` branch, you’re making a copy, or snapshot, of `master` as it was at that point in time. If someone else made changes to the master branch while you were working on your branch, you could pull in those updates.
Branching is the way to work on different versions of a repository at one time.

By default your repository has one branch named `master` which is considered to be the definitive branch. We use branches to experiment and make edits before committing them to master.

When you create a branch off the `master` branch, you’re making a copy, or snapshot, of master as it was at that point in time. If someone else made changes to the master branch while you were working on your branch, you could pull in those updates.

This diagram shows:
* The `master` branch.
* A new branch called `feature` (because we’re doing ‘feature work’ on this branch).
* The journey that `feature` takes before it’s merged into `master`.

![diagram](https://guides.github.com/activities/hello-world/branching.png)

Have you ever saved different versions of a file? Something like:
* `hello.txt`
* `hello-edit.txt`
* `hello-edit-final.txt`

Branches accomplish similar goals in GitHub repositories.

Here at **GitHub**, our developers, writers, and designers use branches for keeping bug fixes and feature work separate from our `master` (production) branch. When a change is ready, they merge their branch into `master`.
