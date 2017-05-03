//
//  LocationController.m
//  LocationReminders
//
//  Created by Kyle Hillman on 5/2/17.
//  Copyright © 2017 Kyle Hillman. All rights reserved.
//

#import "LocationController.h"

//@import MapKit;

@implementation LocationController

+(instancetype)shared{
    
    static LocationController *shared = nil;
    
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        shared = [[[self class] alloc]init];
    });
    
    return shared;
}

- (id)init {
    self = [super init];
    if (self){
        [self requestPermissions];
    }
    self.locationManager.delegate = self;
    
    return self;
}

-(void) requestPermissions{
    self.locationManager = [[CLLocationManager alloc]init];
    self.locationManager.desiredAccuracy = kCLLocationAccuracyBest;
    self.locationManager.distanceFilter = 100; //meters
    
    [self.locationManager requestAlwaysAuthorization];
    
    [self.locationManager startUpdatingLocation];
}

-(void)locationManager:(CLLocationManager *)manager didUpdateLocations:(NSArray<CLLocation *> *)locations{
    self.location = locations.lastObject;
    [self.delegate locationControllerUpdatedLocation:self.location];

}



@end
