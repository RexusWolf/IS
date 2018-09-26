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

## **To create a new branch**
Go to your new repository `hello-world`.
Click the drop down at the top of the file list that says branch: **master**.
Type a branch name, readme-edits, into the new branch text box.
Select the blue **Create branch** box or hit “Enter” on your keyboard.

![branch](https://guides.github.com/activities/hello-world/readme-edits.gif)

Now you have two branches, `master` and `readme-edits`. They look exactly the same, but not for long! Next we’ll add our changes to the new branch.

# **Step 3. Make and commit changes**
Bravo! Now, you’re on the code view for your `readme-edits` branch, which is a copy of `master`. Let’s make some edits.

On GitHub, saved changes are called **commits**. Each commit has an associated *commit message*, which is a description explaining why a particular change was made. Commit messages capture the history of your changes, so other contributors can understand what you’ve done and why.

## **Make and commit changes**
Click the **README.md** file.
Click the  pencil icon in the upper right corner of the file view to edit.
You can write whatever you want in the editor.
Write a commit message that describes your changes.
Click **Commit changes** button.
![commit](https://guides.github.com/activities/hello-world/commit.png)

These changes will be made to just the **README.md** file on your `readme-edits` branch, so now this branch contains content that’s different from master.

# **Step 4. Open a Pull Request**
Nice edits! Now that you have changes in a *branch* off of `master`, you can open a **pull request**.

Pull Requests are the heart of collaboration on GitHub. When you open a pull request, you’re proposing your changes and requesting that someone review and **pull in your contribution and merge them into their branch**. Pull requests show diffs, or differences, of the content from both branches. The changes, additions, and subtractions are shown in green and red.

As soon as you make a *commit*, you can open a pull request and start a discussion, even before the code is finished.

![pull](https://guides.github.com/activities/hello-world/pr-tab.gif)

By using GitHub’s [@mention system](https://help.github.com/articles/about-writing-and-formatting-on-github/#text-formatting-toolbar) in your pull request message, you can ask for feedback from specific people or teams, whether they’re down the hall or 10 time zones away.

You can even open pull requests in your own repository and merge them yourself. It’s a great way to learn the GitHub flow before working on larger projects.

# **Step 5. Merge your Pull Request**

In this final step, it’s time to bring your changes together – merging your `readme-edits` branch into the `master` branch.

1. Click the green **Merge pull request** button to merge the changes into `master`.
2. Click **Confirm merge**.
3. Go ahead and delete the branch, since its changes have been incorporated, with the **Delete branch** button in the purple box.

![merge](https://guides.github.com/activities/hello-world/merge-button.png)

![merge2](https://guides.github.com/activities/hello-world/delete-button.png)

# **Congratulations!**
By completing this tutorial, you’ve learned to **create a project** and make a pull request on GitHub!

Here’s what you accomplished in this tutorial:

* Created an open source repository
* Started and managed a new branch
* Changed a file and committed those changes to GitHub
* Opened and merged a Pull Request
* Take a look at your GitHub profile and you’ll see your new contribution squares!

To learn more about the power of Pull Requests, we recommend reading the [GitHub flow Guide](https://guides.github.com/introduction/flow/). You might also visit [GitHub Explore](https://github.com/explore) and get involved in an Open Source project.
