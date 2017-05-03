//
//  LocationController.h
//  LocationReminders
//
//  Created by Kyle Hillman on 5/2/17.
//  Copyright © 2017 Kyle Hillman. All rights reserved.
//

#import <Foundation/Foundation.h>

@import MapKit;

@interface LocationController : NSObject <CLLocationManagerDelegate>

@property (strong, nonatomic) CLLocationManager *locationManager;
@property (strong, nonatomic) CLLocation *location;
@property (weak, nonatomic) id delegate;

+(instancetype)shared;

@end
