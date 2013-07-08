Myoclonic
=========

A Drupal-based install profile for a personal or family website.

This simple, lightweight site was designed for a person, or a small
group of people, to be able to share pictures, create short updates,
and share recipes.

This profile was created for personal use, and will not be updated
frequently, if at all. It's shared here to allow any other people
looking for something similar to have a starting point.

Install Instructions
====================

These instructions assume that you have the latest version of <a href="https://drupal.org/project/drush">Drush</a> on your server, and have set up a database and database user as described in the standard <a href="https://drupal.org/documentation/install/create-database">Drupal install instructions</a>.

These commands should be issued from the command line, and have ONLY been tested with Ubuntu 12.04. They should work with no issue on most current Linux systems, but YMMV.

* drush dl drupal
* mv drupal-7.22 YOURWEBROOT
* cd YOURWEBROOT/profiles/
* <code>git clone git@github.com:FunnyMonkey/myoclonic.git</code> - this step requires that you have SSH keys stored on GitHub. You can also <a href="https://github.com/FunnyMonkey/myoclonic/archive/master.zip">download the zip file</a> and move it into the <code>profiles</code> directory.
* cd myoclonic
* drush make --no-core --contrib-destination=. myoclonic.make
* cd ../../sites/default/
* cp -pr default.settings.php settings.php
* chmod 777 settings.php 
* mkdir files
* sudo chown -R www-data:www-data files

From there, proceed to the install by navigating to your site in your browser.

Post Install Setup
==================

Update site nav
---------------

Navigate to <code>admin/structure/menu/settings</code> - set "Site Menu" as the source for the Main Links.

Remove branding from the theme
------------------------------

The <a href="https://drupal.org/project/skeletontheme">theme used for this install profile</a> was chosen because it was simple and stripped down. Most of the time, on our Drupal builds, we use <a href="https://drupal.org/project/zoundation">Zoundation</a>, a <a href="http://foundation.zurb.com/">Foundation</a> based theme that is extremely flexible and extensible. On this build, I made the choice to use a different theme, more to see how other themes approach common issues than for any other reason. I haven't done a thorough evaluation of SkeletonTheme, other than what was required to address the needs in this build.

However, SkeletonTheme includes some ugly branding. You can remove it with these two steps:

### Edit the skeletontheme.info file

The branding is contained within line 2. Edit the line to read:

<code>description = Skeleton is a theme.</code>

Save the updated file.

### Edit the page.tpl.php file

On this install, this file is located in <code>yourwebroot/profiles/myoclonic/themes/contrib/skeletontheme/templates</code>

The branding is at the bottom of the file, starting at line 215. With the branding removed, the edited version should read as shown below:

       <div id="credits">
       <?php print(date('Y') . ' ');?>
       <?php if (!empty($site_name)):?>
       <?php print $site_name;?><br/>
       <?php endif;?>
       </div>

Save the updated file.

Create Two Groups
-----------------

The site uses Organic Groups to set public and private content. Create two groups; make one public by default, and the other private by default. If there are people who should not be posting content publicly (such as a child who is learning about Internet privacy, or Uncle Marty who should never be allowed to speak publicly, ever) only add them into the Private group.

Create Users, and assign them into Groups
-----------------------------------------

The site comes with site specific and group specific roles. The roles built into the site make sense for the specifics of my specific use case, but they will likely need to be modified to make sense for other uses. Modify them as needed.

Adjust User Login Settings
--------------------------

The default settings allow people from the internet to create accounts, with administrator approval. 

These settings can be adjusted at <code>admin/config/people/accounts</code>
