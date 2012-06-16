core = 7.x
api = 2

; FYI - the name of this file needs to be the same as the project name as it is referenced in the stub
; or it won't be discovered!

; Need this or we won't be able to build the profile at all
libraries[profiler][download][type] = "get"
libraries[profiler][download][url] = "http://ftp.drupal.org/files/projects/profiler-7.x-2.0-beta1.tar.gz"

; First download the base install profile
projects[base_d7_profile][type] = "profile"
projects[base_d7_profile][download][type] = "git"
projects[base_d7_profile][download][url] = "git://github.com/godel-design/base_d7_profile.git"

; Extend the build below here

; --Custom Modules--

; projects[example][type] = module
; projects[example][download][type] = "git"
; projects[example][download][url] = "git://github.com/godel-design/CLIENTNAME_theme.git"
; projects[example][subdir] = "custom"

; --Patches--

; projects[example][patch][] = "http://drupal.org/files/123456_example_3.patch"

; --Libraries--

; libraries[example][download][type] = "get"
; libraries[example][download][url] = "http://example.com/example.tar.gz"
; libraries[example][directory_name] = "example"
; libraries[example][destination] = "modules/contrib/example"
libraries[example][download][type] = "get"
libraries[example][download][url] = "http://leafo.net/lessphp/src/lessphp-0.3.4-2.tar.gz"
libraries[example][directory_name] = "lessphp"


; --Contrib--

; Stable Version

; projects[example][version] = "3.9"
; projects[example][subdir] = "contrib"

; Dev Snapshot

; projects[example][download][type] = "git"
; projects[example][download][url] = "http://git.drupal.org/project/example.git"
; projects[example][download][revision] = "md5-hash-goes-here"
; projects[example][subdir] = contrib