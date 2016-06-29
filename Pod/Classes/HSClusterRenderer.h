//
//  HSClusterRenderer.h
//  HotSchedules
//
//  Created by Alan Bouzek on 3/31/15.
//  Copyright (c) 2015 HotSchedules. All rights reserved.
//

#ifndef HotSchedules_HSClusterRenderer_h
#define HotSchedules_HSClusterRenderer_h

#include "HSClusterMarker.h"

/**
 * Used to render a custom UIImage for each HSClusterMarker.
 * An NSObject implementing this protocol should be passed as an argument to
 * an initalizer of HSClusterMapView.
 */
@protocol HSClusterRenderer <NSObject>

/**
 * Generates an image for a HSClusterMarker
 * @param clusterMarker - the marker to return a image for
 * @return an image to use for this HSClusterMarker
 */
-(UIImage*)imageForClusterMarker:(HSClusterMarker*)clusterMarker;

@end

#endif
