# Community HW adaptations need this
%define community_adaptation 1

# Sailfish OS is considered to-scale, if in the App Grid you get 4-in-a-row icons,
# and 2-in-a-row or 3-in-a-row app covers in the Home Screen, depending on
# how many apps are open.
# For 4-5.5" device screen sizes of 16:9 ratio, use this formula (hold portrait):
# pixel_ratio = 4.5/DiagonalDisplaySizeInches * HorizontalDisplayResolution/540
# Other screen sizes and ratios will require more trial-and-error.
%define pixel_ratio 1.0

%define out_of_image_files 1
#%define provides_own_board_mapping 1

# Start ofone file conflict problem build_packages --version -------------------
# https://github.com/mer-hybris/droid-config-sony-nile/blob/master/droid-config-common.inc 
# https://irclogs.sailfishos.org/logs/%23sailfishos-porters/%23sailfishos-porters.2019-06-24.log.html
#  
# Device-specific ofono configuration
Provides: ofono-configs
Obsoletes: ofono-configs-mer

# Ende -------------------


