core = 7.22
api = 2
defaults[projects][subdir] = contrib

; Contrib
projects[context][version] = "3.0-beta6"
projects[context_og][version] = "2.1"
projects[ctools][version] = "1.3"
projects[diff][version] = "3.2"
projects[entity][version] = "1.0"
projects[entityreference][version] = "1.0"
projects[entityreference_prepopulate][version] = "1.2"
projects[features][version] = "2.0-beta2"
projects[field_group][version] = "1.1"
projects[galleria][version] = "1.x-dev"
projects[jquery_update][version] = "2.x-dev"
projects[libraries][version] = "2.1"
projects[og][version] = "2.2"
projects[pathauto][version] = "1.2"
projects[recipe][version] = "1.3"
projects[save_draft][version] = "1.4"
projects[skeletontheme][version] = "1.3"
projects[skeletontheme][subdir] = "contrib"
projects[strongarm][version] = "2.0"
projects[token][version] = "1.5"
projects[uuid][version] = "1.x-dev"
projects[video_filter][version] = "3.1"
projects[views][version] = "3.6"
projects[views_bulk_operations][version] = "3.1"
projects[wysiwyg][version] = "2.x-dev"

; Patches

; Development only modules
projects[devel][subdir] = "development"
projects[devel][version] = "1.3"

; Libraries
libraries[galleria][download][type] = "get"
libraries[galleria][download][url]= "http://galleria.io/static/galleria-1.2.9.zip"
libraries[galleria][directory_name] = "galleria"
libraries[galleria][destination] = "libraries"

libraries[tinymce][download][type] = "get"
libraries[tinymce][download][url] = "http://github.com/downloads/tinymce/tinymce/tinymce_3.5.8.zip"
libraries[tinymce][directory_name] = "tinymce"
libraries[tinymce][destination] = "libraries"

