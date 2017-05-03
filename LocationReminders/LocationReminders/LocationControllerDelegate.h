//
//  LocationControllerDelegate.h
//  LocationReminders
//
//  Created by Kyle Hillman on 5/2/17.
//  Copyright © 2017 Kyle Hillman. All rights reserved.
//

#import <Foundation/Foundation.h>


@import CoreLocation;

@protocol LocationControllerDelegate <NSObject>


- (void)locationControllerUpdatedLocation:(CLLocation *)location;

@end
