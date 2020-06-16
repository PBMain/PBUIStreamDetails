//
//  TutorialImageSelectionViewController.h
//  PBPodUIStreamDetails
//
//  Created by Nikita Khodzhaiev on 30.04.2020.
//

#import <UIKit/UIKit.h>
#import "YMSPhotoPickerViewController.h"
#import "YMSPhotoPickerTheme.h"

NS_ASSUME_NONNULL_BEGIN

@protocol TutorialImageSelectionDelegate <NSObject>
- (void) didSelectImage:(PHAsset*)asset;
- (void) didCancelChangeBGImageSelection;
@end

@interface TutorialImageSelectionViewController : UIViewController

@property (nonatomic, weak) id <TutorialImageSelectionDelegate> delegate;

@property (nonatomic, strong) NSMutableArray *selectedPhotos;

@property (nonatomic) int numberOfImagesToSelect;
@property (nonatomic, readonly) YMSPhotoPickerTheme *theme;
@property (nonatomic) UIView *viewPoweredByPB;

@end

NS_ASSUME_NONNULL_END
