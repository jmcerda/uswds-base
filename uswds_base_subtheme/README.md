# USWDS Base Subtheme

## Theme Resources:
U.S. Web Design System (USWDS) - https://designsystem.digital.gov/
U.S. Web Design System (USWDS) Drupal theme - https://www.drupal.org/project/uswds
USWDS Gulp pipeline - https://github.com/uswds/uswds-gulp
USWDS Color Picker - https://civicactions.github.io/uswds-color-tool/
Legacy "Getting Started" guide - https://www.drupalgovcon.org/sites/default/files/session/slides/2020-06/pres_Drupal-GovCon_bseek_dboeger_USWDS-%26-Drupal_061220.pdf

## Custom Twig Variables:
{{ uswds_base_theme_path }} - use to get the theme path for uswds_base theme. It is currently used for the image_path of the flag icon in USWDS Govt Banner
{{ uswds_base_theme_img_path }} - use to get the image path for uswds_base theme.

## Workflow Installation
If you've never installed Gulp, you'll need to install the Gulp command line interface:

```bash
npm install gulp-cli -g
```

Install packages
npm i

## Usage
Copy uswds_base_subtheme from uswds_base to /docroot/themes/custom/

Edit contents of uswds_base_subtheme.info.yml, and uswds_base_subtheme.libraries.yml files by replacing uswds_base references to the name of your subtheme.

Rename the following directories: uswds_base_subtheme directory, uswds_base_subtheme.info.yml, and uswds_base_subtheme.libraries.yml from "uswds_base_subtheme" to the name of your "subtheme".

Edit your customzied USWDS settings  `_uswds-theme-custom-settings.scss` file.

Edit your customzied USWDS styles  `_uswds-theme-custom-styles.scss` file. Make sure to use design tokens. (https://designsystem.digital.gov/design-tokens/color/theme-tokens/)

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

