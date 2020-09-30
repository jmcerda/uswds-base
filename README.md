# OIG Base - a subtheme of USWDS

A subtheme of [USWDS](https://www.drupal.org/project/uswds) for OIG Template.

## Subtheming

As with most Drupal themes, it's recommended that your active theme for your OIG Template project be a subtheme of this one, to make updates easier and to maintain control of your OIGs workflow. Simply copy out the oig_base_subtheme directory to get started, following the directions in /oig_base_subtheme/README.md.

1. Copy the oig_base_subtheme directory out into the desired location for your subtheme (eg, themes/custom/my_subtheme).
2. Rename the directory to the name of your theme (eg, my_renamed_theme).
3. Rename the oig_base_subtheme.info.yml.rename-me file to name-of-your-theme.info.yml (eg, my_renamed_theme.info.yml).
4. Tweak that .info.yml file as needed, noting the instructions there for Sass workflow, if that is desired.
5. Enable this theme in the usual way (eg, drush en my_renamed_subtheme).
