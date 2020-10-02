# OIG Base Subtheme

## Theme Resources:
U.S. Web Design System (USWDS) - https://designsystem.digital.gov/
U.S. Web Design System (USWDS) Drupal theme - https://www.drupal.org/project/uswds
USWDS Gulp pipeline - https://github.com/uswds/uswds-gulp
USWDS Color Picker - https://civicactions.github.io/uswds-color-tool/
Legacy "Getting Started" guide - https://www.drupalgovcon.org/sites/default/files/session/slides/2020-06/pres_Drupal-GovCon_bseek_dboeger_USWDS-%26-Drupal_061220.pdf


## Workflow Installation

If you've never installed Gulp, you'll need to install the Gulp command line interface:

```bash
npm install gulp-cli -g
```

Install packages

```bash
npm i
```

## Usage

Initialize your USWDS project. Initialization does the following:

- Copies settings files and the USWDS base Sass file to your project Sass directory
- Copies images, fonts, and javascript files to the directories you set above
- Compiles the USWDS Sass into a usable CSS file, called `styles.css` by default

Intitialize your USWDS project by running the following command:

```bash
gulp init
```

---

Update the path for images in `_uswds-theme-general.scss` to be `../img`

Update the path for fonts in `_uswds-theme-typography.scss` to be `../fonts`

Edit your USWDS settings in the new settings files and add custom Sass to the new `_uswds-theme-custom-styles.scss` file. Watch these files and compile any changes with

```bash
gulp watch
```

Now you can edit the USWDS settings located in the sass directory that was added in the root of the theme.

Continue normal theme development.

Profit.

:rocket:

