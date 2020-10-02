# OIG Base theme

## Theme Resources:
U.S. Web Design System (USWDS) - https://designsystem.digital.gov/
U.S. Web Design System (USWDS) Drupal theme - https://www.drupal.org/project/uswds
USWDS Gulp pipeline - https://github.com/uswds/uswds-gulp
USWDS Color Picker - https://civicactions.github.io/uswds-color-tool/
Legacy "Getting Started" guide - https://www.drupalgovcon.org/sites/default/files/session/slides/2020-06/pres_Drupal-GovCon_bseek_dboeger_USWDS-%26-Drupal_061220.pdf

## Contributing

### Branches

####Feature Branches

When working on an existing site, each new feature should reside in its own branch which can be pushed to the central repository for backup/collaboration. But, instead of branching off of master, feature branches use develop as their parent branch. When a feature is complete, it gets merged back into develop. **Features should never interact directly with master.**

Feature branches are **ALWAYS** created off to the latest develop branch.

##### Creating a feature branch

`git checkout develop`

`git checkout -b feature/FEATURE_BRANCH`

Continue your work and use Git like you normally would.

#####Finishing a feature branch

When you’re done with the development work on the feature, the next step is to merge the feature_branch into develop.

`git checkout develop`

`git merge feature/FEATURE_BRANCH`

####Release Branches

#####Starting a release branch

Once develop has acquired enough features for a release (or a predetermined release date is approaching), you fork a release branch off of develop. Creating this branch starts the next release cycle, so no new features can be added after this point—only bug fixes, documentation generation, and other release-oriented tasks should go in this branch. Once it's ready to ship, the release branch gets merged into master and tagged with a version number. In addition, it should be merged back into develop, which may have progressed since the release was initiated.

Like feature branches, release branches are based on the develop branch.

`git checkout develop`

` git checkout -b release/0.1.0`

#####Finishing a release branch

Once the release is ready to ship, it will get merged it into master and develop, then the release branch will be deleted. It’s important to merge back into develop because critical updates may have been added to the release branch and they need to be accessible to new features.

**It is essential to initiate a pull request to merge the release into master.**

####Hotfix Branches

Maintenance or “hotfix” branches are used to quickly patch production releases. **Hotfix branches are based on master instead of develop.** This is the only branch that should fork directly off of master. As soon as the fix is complete, it should be merged into both master and develop (or the current release branch), and master should be tagged with an updated version number.

#####Starting a hotfix branch
`git checkout master`

 `git checkout -b hotfix/HOTFIX_BRANCH`

#####Finishing a hotfix branch
Similar to finishing a release branch, a hotfix branch gets merged into both master and develop.

`git checkout master`

`git merge hotfix/HOTFIX_BRANCH`

`git checkout develop`

`git merge hotfix/HOTFIX_BRANCH`

`git branch -D hotfix/HOTFIX_BRANCH`

#### Overall git workflow rules.

1. A develop branch is created from master
2. A release branch is created from develop
3. Feature branches are created from develop
4. When a feature is complete it is merged into the develop branch
5. When the release branch is done it is merged into develop, and then master via a pull request
6. If an issue in master is detected a hotfix branch is created from master
7. Once the hotfix is complete it is merged to both develop, and then master via a pull request
