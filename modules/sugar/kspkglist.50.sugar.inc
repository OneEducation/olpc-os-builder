# sugar desktop
sugar
sugar-base
sugar-toolkit
sugar-toolkit-gtk3

# sugar control panels
sugar-cp-backup
sugar-cp-datetime
sugar-cp-frame
sugar-cp-language
sugar-cp-modemconfiguration
sugar-cp-network
sugar-cp-power
sugar-cp-updater
sugar-cp-background
sugar-cp-webaccount

# additional sugar packages
dconf
webkitgtk3
espeak
etoys
evince-djvu
gtksourceview2
gvfs
libffi
numpy
csound
csound-python
pygame
python-alsaaudio
squeak-vm

# Browse
gnash-plugin
totem-mozplugin

# Record, Measure, and Jukebox
gstreamer-python

# Terminal
vte3
python-simplejson

# dependencies for Epub support in Read
python-BeautifulSoup
olpc-library

# for Tuxmath activity
SDL_Pango

# for Physics
pybox2d

# for text-to-speech in Read
gstreamer-plugins-espeak

# explicitly specify dependencies on GNOME's implementation of certain
# components, otherwise the KDE ones will be brought in by default
PolicyKit-gnome
notification-daemon

# standard part of PyGTK, used by some activities (#11053)
pygtk2-libglade
