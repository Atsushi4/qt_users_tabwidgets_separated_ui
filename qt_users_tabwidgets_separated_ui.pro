TEMPLATE = subdirs

SUBDIRS += \
    mywidgets \
    sample1 \
    sample2 \
    sample3

sample1.depends += mywidgets
sample2.depends += mywidgets
