//
//  CameraControllerViewController.h
//  PhotoButler
//
//  Created by Mirant on 24/01/17.
//  Copyright © 2017 blurbIQ. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

#import "PBPodUILibraries_UmbHeader.h"

@interface CameraControllerViewController : UIViewController<UIImagePickerControllerDelegate,UINavigationControllerDelegate, JPSImagePickerDelegate> {
    
    IBOutlet UIButton *btnDone;
    IBOutlet UIButton *btnFlash;
    IBOutlet UIButton *btnCameraRotate;
    IBOutlet UIButton *btnSnap;
}

@property (nonatomic) NSTimer *timerUpload;
@property (nonatomic) int timerUploadTicks;
@property (nonatomic) CLLocation *lastKnownLocation;

-(NSString*) getUTCFormattedDate:(NSDate*) date;
- (void)setLocation:(NSMutableDictionary *)metadata location:(CLLocation *)location;
@end
