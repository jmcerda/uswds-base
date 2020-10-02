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

Add all the required dependencies at once with following command from your project's root directory:

```bash
npm install autoprefixer gulp gulp-replace sass gulp-sass gulp-sourcemaps gulp-postcss postcss-csso uswds uswds-gulp@github:uswds/uswds-gulp --save-dev
```

## Usage

**If you don't already have a project gulpfile,** copy the `gulpfile.js` to your current directory (the project root):

```bash
cp node_modules/uswds-gulp/gulpfile.js .
```

OR

**If you do already have a project gulpfile,** copy and rename the USWDS gulpfile (then you can manually add the contents of the USWDS gulpfile to your existing gulpfile and continue with the instructions):

```bash
cp node_modules/uswds-gulp/gulpfile.js gulpfile-uswds.js
```

We use autoprefixer for maximum browser compatibility. To ensure you're targeting the correct browsers we use a `.browserslistrc` file. **If you don't already have one** copy our file to your current directory (the project root):

```bash
cp node_modules/uswds-gulp/.browserslistrc .
```

OR

If you already have a `.browserslistrc` make sure you're targeting the following browsers:

```bash
> 2%
last 2 versions
IE 11
not dead
```

---

Open `gulpfile.js` in a text editor. In the `Paths` section, set the following constants with the proper paths. Don't use trailing slashes in the paths. All paths should be relative to the project root.

    - const PROJECT_SASS_SRC = "./sass";
    - const IMG_DEST = "./assets/img";
    - const FONTS_DEST = "./assets/fonts";
    - const JS_DEST = "./assets/js";
    - const CSS_DEST = "./css";
    - const SITE_CSS_DEST = "./css";

---

Save `gulpfile.js` with these updated paths.

---

Initialize your USWDS project. Initialization does the following:

- Copies settings files and the USWDS base Sass file to your project Sass directory
- Copies images, fonts, and javascript files to the directories you set above
- Compiles the USWDS Sass into a usable CSS file, called `styles.css` by default

Intitialize your USWDS project by running the following command:

```bash
gulp init
```

---

Update the path for images in `_uswds-theme-general.scss` to be `../assets/img`

Update the path for fonts in `_uswds-theme-typography.scss` to be `../assets/fonts`

Edit your USWDS settings in the new settings files and add custom Sass to the new `_uswds-theme-custom-styles.scss` file. Watch these files and compile any changes with

```bash
gulp watch
```

Now you can edit the USWDS settings located in the sass directory that was added in the root of the theme.

Continue normal theme development.

Profit.

:rocket:
