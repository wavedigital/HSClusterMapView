//
//  HSZIndexClusterAlgorithm.h
//  Based on HSClusterAlgorithm but only clusters markers at the same zIndex
//  Created by David Wolfe on 28/06/2016.
//
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface HSZIndexClusterAlgorithm : NSObject

/**
 * Forms HSClusterMarkers from GMSMarkers.
 * @param markersToCluster - an array of GMSMarkers to form clusters from
 * @param radius - the size of the radius to form clusters using
 * @return an array of GMSMarker and HSClusterMarker instances
 */
+(NSArray *)bubbleClustersFromMarkers:(NSArray *)markersToCluster
                        clusterRadius:(CLLocationDistance)radius;

@end
