# OIG Base Subtheme

## Installation

1. Copy the oig_base_subtheme directory out into the desired location for your subtheme (eg, themes/custom/my_subtheme).
2. Rename the directory to the name of your theme (eg, my_renamed_theme).
3. Rename the oig_base_subtheme.info.yml.rename-me file to name-of-your-theme.info.yml (eg, my_renamed_theme.info.yml).
4. Tweak that .info.yml file as needed, noting the instructions there for Sass workflow, if that is desired.
5. If you've never installed Gulp, you'll need to install the Gulp command line interface:

       npm install gulp-cli -g

6. Add all the required dependencies at once with following command from your project's root directory:

       npm install autoprefixer gulp gulp-replace sass gulp-sass gulp-sourcemaps gulp-postcss postcss-csso uswds uswds-gulp@github:uswds/uswds-gulp --save-dev

7. If you don't already have a project gulpfile, copy the gulpfile.js to your current directory (the project root):

           cp node_modules/uswds-gulp/gulpfile.js .

8. Update the following variables with these values in the copied gulpfile:
    - const PROJECT_SASS_SRC = "./sass";
    - const IMG_DEST = "./assets/img";
    - const FONTS_DEST = "./assets/fonts";
    - const JS_DEST = "./assets/js";
    - const CSS_DEST = "./css";
    - const SITE_CSS_DEST = "./css";

9 Run Gulp to initialize the project, copy necessary assets, and compile your sass.

       gulp init

10. Update the path for images in `_uswds-theme-general.scss` to be `../assets/img`
11. Update the path for fonts in `_uswds-theme-typography.scss` to be `../assets/fonts`
12. Enable this theme in the usual way (eg, drush en my_renamed_subtheme).
13. Now you can edit the USWDS settings located in the sass directory that was added in the root of the theme.
14. Next continue normal theme development.

## Theme Resources:
U.S. Web Design System (USWDS) - https://designsystem.digital.gov/
U.S. Web Design System (USWDS) Drupal theme - https://www.drupal.org/project/uswds
USWDS Gulp pipeline - https://github.com/uswds/uswds-gulp
USWDS Color Picker - https://civicactions.github.io/uswds-color-tool/
Legacy "Getting Started" guide - https://www.drupalgovcon.org/sites/default/files/session/slides/2020-06/pres_Drupal-GovCon_bseek_dboeger_USWDS-%26-Drupal_061220.pdf
