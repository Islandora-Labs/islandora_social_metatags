# Islandora Twitter Cards

Add Twitter Cards meta tags to your site without hacking the theme.

## Introduction

Islandora Twitter Cards adds Twitter-recognized meta tags to the HTML headers on Islandora objects based on MODS metadata. These tags enable Twitter to render Twitter Cards when Islandora content is tweeted.

**Before:**

![](https://s16.postimg.org/3mq40cwox/Screen_Shot_2016_08_31_at_9_23_35_AM.png)

**After:**

![](https://s16.postimg.org/6uuldeiyp/Screen_Shot_2016_08_31_at_9_24_14_AM.png)

## Requirements

This module requires the following modules/libraries:

* [Islandora](https://github.com/islandora/islandora)
* [Tuque](https://github.com/islandora/tuque)
* Probably a given for most repositories, but your objects must have a MODS datastream

## Installation

Install as usual, see [this](https://drupal.org/documentation/install/modules-themes/modules-7) for further information.

## Configuration

Configuration path is admin/islandora/tools/twitter_cards (Administration > Islandora > Islandora Utility Modules > Islandora Twitter Cards Configuration).

There are three fields to configure:

* Title XPath
   * The XPath to your MODS Title field. Feeds the twitter:title meta tag.
   * Default should work for most sites.
* Abstract XPath 
   * The XPath to the MODS Abstract field. Feeds the twitter:description meta tag.
   * Default should work for most sites.
* Site Twitter User
   * Your site's Twitter handle, or your site administrator's twitter handle.
   * Required.

## Activation and Testing

Once the module is installed, enabled, and configure, test your objects at the [Twitter Cards Validator](https://cards-dev.twitter.com/validator). Successfully testing a tweet gets your site whitelisted for the cards.

## Limitations

Currently configured to work on five content models: Basic Image, Large Image, Citation, Thesis, and Video.
The twitter:image tag is populated with a datastream view URL which depends on the content model. 

## Troubleshooting/Issues

Having problems or solved a problem? Check out the Islandora google groups for a solution.

* [Islandora Group](https://groups.google.com/forum/?hl=en&fromgroups#!forum/islandora)
* [Islandora Dev Group](https://groups.google.com/forum/?hl=en&fromgroups#!forum/islandora-dev)

## Maintainers/Sponsors

Current maintainers:

* [Brandon Weigel](https://github.com/bondjimbond)

## Development

If you would like to contribute to this module, please check out [CONTRIBUTING.md](CONTRIBUTING.md). In addition, we have helpful [Documentation for Developers](https://github.com/Islandora/islandora/wiki#wiki-documentation-for-developers) info, as well as our [Developers](http://islandora.ca/developers) section on the [Islandora.ca](http://islandora.ca) site.
   
   
