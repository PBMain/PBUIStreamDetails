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
- (void) didUseImage:(UIImage*)asset;
- (void) didCancelChangeBGImageSelection;
@end

@interface TutorialImageSelectionViewController : UIViewController

@property (nonatomic, weak) id <TutorialImageSelectionDelegate> delegate;

@property (nonatomic, strong) NSMutableArray *selectedPhotos;

@property (nonatomic) int numberOfImagesToSelect;
@property (nonatomic, readonly) YMSPhotoPickerTheme *theme;
@property (nonatomic) UIView *viewPoweredByPB;

-(void) clearSelections;


// For FANtastic Photos

// These can be from the stream or from the app
// We just pass them down from whoever is showing the views
@property (nonatomic) NSArray *backgroundImages;
@property (nonatomic) NSArray *overlayImages;

// If it's a stream, we will probably need the ID
@property (nonatomic) NSString *streamID;
@property (nonatomic) NSMutableArray *streamImages;
@property (nonatomic) NSMutableDictionary *streamImageIDsLoaded;
@property (nonatomic) BOOL isUsingStream;
@property (nonatomic) BOOL isDonePagingStreamImages;
@property (nonatomic) BOOL isLoadingPage;

// For fast scrolling
@property (nonatomic) BOOL isLoadingImages;
@property (atomic) NSLock *lockLoadVisibleCells;
@property (nonatomic) CGPoint lastOffset;
@property (nonatomic) NSTimeInterval lastOffsetCapture;


@end

NS_ASSUME_NONNULL_END
