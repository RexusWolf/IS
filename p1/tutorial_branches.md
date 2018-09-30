## Using branches in git

### 1. What is a branch?
In git, branches represent different lines of work. Each branch works independently from the rest, and has its own commit history.

Branches are very useful, as they can be used to make quick changes to the code without affecting or having to commit WIP or long-term changes; or to work on the same files parallely and solving the possible conflicts.

### 2. Basic branching
Each repository has at least one branch, called `master` by default. To create a new branch we use the command `git branch <name>`. This creates a new branch, but we are still working in `master`. To switch the working branch we use `git checkout <name>`. Both commands can be combined in `git checkout -b <name>` which creates a branch and switches to it. Simply typing 'git branch' lists all the branches in the repository.

When we are finished making the changes and/or want to fuse two branches together we use `git merge <name>`. `merge`applies the changes of the branch `<name>` to the current working branch, and marks the conflicts, which are normally solved manually, by choosing to keep the changes in one of the branches or both of them.

### 3. Stashing
Stashing is used when you want to switch branches and save your previous work without doing a commit. This is done with the `git stash` command. Using it saves all the modifications to the tracked files and staged changes in a stack, so they can be reapplied at any time, and cleans them from the repository. To get those changes back, we use `git stash <pop/apply> [name]` if name is not specified, git will try to apply the most recent stash.

### 4. Other commands used with branches
We can easily compare branches with 'git diff <branch1> <branch2>', see which branches are the same as the current branch with 'git branch --merged'. To delete a branch we use 'git branch -D <name>', and to rename it, 'git branch -m <old name> <new name>'
