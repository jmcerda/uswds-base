# OIG Base Subtheme

## Theme Resources:
U.S. Web Design System (USWDS) - https://designsystem.digital.gov/
U.S. Web Design System (USWDS) Drupal theme - https://www.drupal.org/project/uswds
USWDS Gulp pipeline - https://github.com/uswds/uswds-gulp
USWDS Color Picker - https://civicactions.github.io/uswds-color-tool/
Legacy "Getting Started" guide - https://www.drupalgovcon.org/sites/default/files/session/slides/2020-06/pres_Drupal-GovCon_bseek_dboeger_USWDS-%26-Drupal_061220.pdf

## Custom Twig Variables:
{{ oig_base_theme_path }} - use to get the theme path for oig_base theme. It is currently used for the image_path of the flag icon in USWDS Govt Banner
{{ oig_base_theme_img_path }} - use to get the image path for oig_base theme.

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
Copy oig_base_subtheme from oig_base to /docroot/themes/custom/

Rename oig_base_subtheme directory, oig_base.info.yml, and oig_base_subtheme.libraries.yml to the name of your subtheme.

Rename oig_base_subtheme to your subtheme in oig_base.info.yml, and oig_base_subtheme.libraries.yml

Edit your customzied USWDS settings  `_uswds-theme-custom-settings.scss` file.

Edit your customzied USWDS styles  `_uswds-theme-custom-styles.scss` file.

Compile any changes manually with

```bash
gulp build-sass
```

Watch these files and compile automatically any changes with

```bash
gulp watch
```

Continue normal theme development.

Profit.

:rocket:

