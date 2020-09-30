# OIG Base

## Installation

➔ If you've never installed Gulp, you'll need to install the Gulp command line interface:

    npm install gulp-cli -g

➔ All required dependencies are included in the provided package.json file.

Initialize Gulp to have the assets copied and sass compiled.

    gulp init
    
➔ Update the path for images in `_uswds-theme-general.scss` to be `../assets/img`

➔ Update the path for fonts in `_uswds-theme-typography.scss` to be `../assets/fonts`

➔ Enable this theme

    drush en oig_base

➔ Customize theme settings located in the sass directory found in the root of this theme.

## Using OIG Base theme

➔ Compile initial style sheet
  
    gulp build-sass
    
➔ Watch changes

    gulp watch

## Theme Resources:
U.S. Web Design System (USWDS) - https://designsystem.digital.gov/
U.S. Web Design System (USWDS) Drupal theme - https://www.drupal.org/project/uswds
USWDS Gulp pipeline - https://github.com/uswds/uswds-gulp
USWDS Color Picker - https://civicactions.github.io/uswds-color-tool/
Legacy "Getting Started" guide - https://www.drupalgovcon.org/sites/default/files/session/slides/2020-06/pres_Drupal-GovCon_bseek_dboeger_USWDS-%26-Drupal_061220.pdf
