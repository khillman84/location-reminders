//
//  LocationControllerDelegate.h
//  LocationReminders
//
//  Created by Kyle Hillman on 5/2/17.
//  Copyright © 2017 Kyle Hillman. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol LocationControllerDelegate <NSObject>

@optional
- (void)locationControllerUpdatedLocation:(CLLocation *)location;

@end
