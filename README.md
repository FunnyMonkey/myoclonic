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

TBD

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

### Edit the page.tpl.php file

On this install, this file is located in <code>yourwebroot/profiles/myoclonic/themes/contrib/skeletontheme/templates</code>

The branding is at the bottom of the file, starting at line 215. With the branding removed, the edited version should read as shown below:

<code>
       <div id="credits">
       <?php print(date('Y') . ' ');?>
       <?php if (!empty($site_name)):?>
       <?php print $site_name;?><br/>
       <?php endif;?>
       </div>
</code>


Create Two Groups
-----------------

The site uses Organic Groups to set public and private content. Create two groups; make one public by default, and the other private by default. If there are people who should not be posting content publicly (such as a child who is learning about Internet privacy, or Uncle Marty who should never be allowed to speak publicly, ever) only add them into the Private group.

Create Users, and assign them into Groups
-----------------------------------------

The site comes with site specific and group specific roles. The roles built into the site make sense for the specifics of my specific use case, but they will likely need to be modified to make sense for other uses. Modify them as needed.

