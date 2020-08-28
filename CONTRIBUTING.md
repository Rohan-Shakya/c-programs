# Contribution Welcome
Thanks for your interest in contributing to this repository! Contributing to open source projects like this one can be a rewarding way to learn, teach, and build experience.
Not only that, contributing is a great way to get involved with social coding.

If you are new to contributing to open source projects, the process can be intimidating. Not to worry! To help ensure both you and the community get the most out of your contributions, we've put together the following guidelines.
# Request for contributions:
Please contribute to this repository if any of the following is true:
* You have expertise in community development, communication, or education
* You want open source communities to be more collaborative and inclusive

# How to Contribute:
### Prerequisites
* Familiarity with [pull request](https://docs.github.com/en/github/collaborating-with-issues-and-pull-requests/about-pull-requests) and [issues](https://guides.github.com/features/issues/).
* Knowledge of [Markdown](https://docs.github.com/en/github/writing-on-github/getting-started-with-writing-and-formatting-on-github) for editing .md documents.

In particular, this community seeks the following types of contributions:
* **Resources:** Submit a pull request to add your content with links to related content.
* **Writing:** Contribute your expertise in an area by helping us expand the included content.
* **Copy editing:** Fix typos, clarify language, and generally improve the quality of the content.
* **Formatting:** Help keep content easy to read with consistent formatting.
## Steps to contribute:
1. `fork` the project repository by clicking the fork button on GitHub. ![Fork](https://camo.githubusercontent.com/9aa6c12b0a100ea4be6215ea84ea12556e4dc013/68747470733a2f2f68656c702e6769746875622e636f6d2f6173736574732f696d616765732f68656c702f7265706f7369746f72792f666f726b5f627574746f6e2e6a7067)
1. `clone` your forked repository (noob tip: the actual command you type in is everything after the $):
```shell
   $ git clone https://github.com/<YOUR-USERNAME>/c-programs.git
```

1. Add a new remote that points to the original project so you can sync project changes with your local copy:
  ```shell
   $ git remote add upstream https://github.com/Rohan-Shakya/c-programs.git
   ```
   
1. Pull upstream changes into your local repositories `development` branch:
 ```shell
   $ git checkout development
   $ git pull upstream development && git push origin development
   ```
   
1. Create a new branch from the `development` branch:
![branch](https://help.github.com/assets/images/help/branch/branch-selection-dropdown.png)

 **IMPORTANT:** Make sure you are on the `development` branch first.
 ```shell
   $ git checkout -b <YOUR-NEW-BRANCH>
 ```
   
1. Make your contribution to the project code.
   
1. Write or adapt tests as needed.

1. Add or change documentation as needed.

1. After commiting changes, push your branch to your fork on Github, the remote `origin`:

   **IMPORTANT:** Your commit message should be in present tense and should describe what the commit, when applied, does to the code - not what you did to the code.
    ```shell
   $ git push -u origin <YOUR-NEW-BRANCH>
   ```
   
1. From your forked GitHub repository, open a pull request in the branch containing your contributions. Target the project's `development` branch for the pull request.
   
1. At this point, your contribution has been submitted for review. Please be patient while your contribution is being reviewed as this can take some time. Meanwhile, if there are questions or comments on your contribution, please respond and/or update with future commits.

1. Once the pull request is approved and merged, you can pull the changes from `upstream` to your local repository and delete your extra branch(es).

### Happy contributing!

# Conduct
We are committed to providing a friendly, safe and welcoming environment for all, regardless of gender, sexual orientation, disability, ethnicity, religion, or similar personal characteristic.

Please avoid using overtly sexual nicknames or other nicknames that might detract from a friendly, safe and welcoming environment for all.

Please be kind and courteous. There's no need to be mean or rude.

Respect that people have differences of opinion and that every design or implementation choice carries a trade-off and numerous costs.

Please keep unstructured critique to a minimum. If you have solid ideas you want to experiment with, make a fork and see how it works.

We will exclude you from interaction if you insult, demean or harass anyone.

Likewise any spamming, trolling, flaming, baiting or other attention-stealing behaviour is not welcome.

# Communication
GitHub issues are the primary way for communicating about specific proposed changes to this project.

