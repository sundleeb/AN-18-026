# AN-18-026

## Setup

As a first step, fork the central repository in your github account.

Log into lxplus and in  your public area setup the svn repository:
```
svn co -N svn+ssh://svn.cern.ch/reps/tdr2
cd tdr2/
svn update utils
svn update -N notes
svn update notes/AN-18-026
```
Inside the svn repository, init github:

```
cd notes/AN-18-026
git init
```

Rebase the forked version in your github account to the local version:
```
git pull https://github.com/YOUR_GITHUB_USERNAME/AN-18-026.git master

```
Edit a file and push the changes to your forked repo:

```
git add EDITED_FILE
git commit -m “first push”
git remote add origin https://github.com/YOUR_GITHUB_USERNAME/AN-18-026.git
git push -u origin master
```
## Procedure

Edit files and compile in svn. When ready, push all the changes to your forked github repository and make a pull request from the central repository.
Remember to pull from the central repository at every new session:
```
git pull https://github.com/LPC-DM-AN/AN-18-026.git master

```
Updates on the central repository will be advertized on the #documentation channel of the LPC_DM Slack.

