//
//  LocationController.h
//  LocationReminders
//
//  Created by Kyle Hillman on 5/2/17.
//  Copyright © 2017 Kyle Hillman. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LocationControllerDelegate.h"

@import MapKit;

@interface LocationController : NSObject <CLLocationManagerDelegate>

@property (strong, nonatomic) CLLocationManager *locationManager;
@property (strong, nonatomic) CLLocation *location;
@property (weak, nonatomic) id <LocationControllerDelegate> delegate;

+(instancetype)shared;

-(void)startMonitoringForRegion:(CLRegion *)region;

@end
