#import <UIKit/UIKit.h>

#import "PBPodUILibraries_UmbHeader.h"

@protocol CustomCoverCameraDelegate <NSObject>
- (void)choseCustomCoverImage:(UIImage*)img;
@property (nonatomic) NSString *tmpCustomCoverAssetID;
@property (nonatomic) NSString *tmpCustomCoverFileName;
@property (nonatomic) NSString *tmpCustomCoverCreationDate;
@end

@interface CustomCoverCameraViewController : UIViewController <UIImagePickerControllerDelegate,UINavigationControllerDelegate, JPSImagePickerDelegate> {
    
    IBOutlet UIButton *btnDone;
    IBOutlet UIButton *btnFlash;
    IBOutlet UIButton *btnCameraRotate;
    IBOutlet UIButton *btnSnap;
    
    BOOL isFirstTime;
    UIImagePickerController *imagePickerController;
    NSDictionary *imgMeta;
}

@property (nonatomic, weak) id<CustomCoverCameraDelegate> delegate;
@property (nonatomic) UIImagePickerController *imagePickerController;
@property (nonatomic) NSString *streamID;

@end
