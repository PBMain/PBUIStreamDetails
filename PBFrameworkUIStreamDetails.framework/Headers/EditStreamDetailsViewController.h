//
//  EditStreamDetailsViewController.h
//  PhotoButler
//
//  Created by Philippe Belley on 3/22/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CustomStreamCoverMenu.h"
#import "CustomCoverCameraViewController.h"
#import "DeleteStreamView.h"
#import <TOCropViewController/TOCropViewController.h>
#import <PBFrameworkUIStreamDetails/ChooseImageFromStream.h>

typedef NS_ENUM(NSInteger, StreamType) {
    CurrentStreamType = 0,
    FutureStreamType,
    ExpiredStreamType
};

@import Photos;

@interface EditStreamDetailsViewController : UIViewController <UITextFieldDelegate, UIPickerViewDelegate, UIPickerViewDataSource, CustomStreamCoverMenuDelegate, CustomCoverCameraDelegate, ChooseImageFromStreamDelegate, CustomStreamCoverMenuDelegate, TOCropViewControllerDelegate, UIImagePickerControllerDelegate, UIScrollViewDelegate>

@property (weak, nonatomic) IBOutlet UITextField *tfStreamName;
@property (weak, nonatomic) IBOutlet UIButton *btnPencil;
@property (weak, nonatomic) IBOutlet UILabel *lblScreenTitle;
@property (weak, nonatomic) IBOutlet UIView *viewFutureStream;
@property (weak, nonatomic) IBOutlet UIView *startEndDateExpanders;
@property (weak, nonatomic) IBOutlet UIView *topBar;
@property (weak, nonatomic) IBOutlet UIView *vNavigation;

@property (weak, nonatomic) IBOutlet UILabel *lblStarts;
@property (weak, nonatomic) IBOutlet UILabel *lblStartTime;
@property (weak, nonatomic) IBOutlet UILabel *lblEnds;
@property (weak, nonatomic) IBOutlet UILabel *lblEndTime;
@property (weak, nonatomic) IBOutlet UIView *viewCurrentStream;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *startPickerConstraint;
@property (assign) CGFloat startPickerConOriginal;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *endPickerConstraint;
@property (assign) CGFloat endPickerConOriginal;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *nameToCurrentStream;
@property (weak, nonatomic) IBOutlet UIButton *btnDelete;
@property (weak, nonatomic) IBOutlet UIButton *btnStop;
@property (strong, nonatomic) IBOutlet UIDatePicker *datePicker;
@property (weak, nonatomic) IBOutlet UIPickerView *pickerView;
@property (nonatomic, assign) StreamType currentState;
@property (weak, nonatomic) IBOutlet UILabel *lblScheduledStreamTime;
@property (weak, nonatomic) IBOutlet UIView *viewShortenExtendContainer;
@property (weak, nonatomic) IBOutlet UILabel *lblCurrentStreamTime;
@property (weak, nonatomic) IBOutlet UIButton *btnExtend;
@property (weak, nonatomic) IBOutlet UIButton *btnChooseNewCover;
@property (weak, nonatomic) IBOutlet UILabel *lblExtend;
@property (weak, nonatomic) IBOutlet UIButton *extendButtonVisual;
@property (weak, nonatomic) IBOutlet UIButton *btnShorten;
@property (weak, nonatomic) IBOutlet UILabel *lblShorten;
@property (weak, nonatomic) IBOutlet UIButton *shortenButtonVisual;
@property (weak, nonatomic) IBOutlet UILabel *lblTimeNew;
@property (strong, nonatomic) NSDate *endManageDate;
@property (strong, nonatomic) NSDate *startManageDate;
@property (strong, nonatomic) NSDate *currentEndDate;
@property (strong, nonatomic) NSDate *currentStartDate;
@property (nonatomic) NSString *albumId;
@property (nonatomic) NSDictionary *album;
@property (nonatomic, assign) NSInteger timeModificationMultiplier;
@property (strong, nonatomic) NSMutableDictionary *callsToMake;
@property (atomic) NSRecursiveLock *lockSaveDict;
@property (nonatomic, assign) NSTimeInterval lengthOfScheduledStream;
@property (nonatomic, strong) UILabel *lblHours;
@property (nonatomic, strong) UILabel *lblMin;
@property (nonatomic) NSString* streamName;

// Cover Image
@property (weak, nonatomic) IBOutlet UIImageView *imgCoverPhoto;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *conChooseCoverPhoto;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *conCoverPhoto;
@property (weak, nonatomic) IBOutlet UIView *viewChooseCoverPhoto;
@property (weak, nonatomic) IBOutlet UIView *viewCoverPhoto;
@property (weak, nonatomic) IBOutlet UIView *viewDeleteStream;
@property (weak, nonatomic) IBOutlet UIView *viewDeleteStreamAnchored;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *layoutDeleteStreamAnchoredHeight;
@property (weak, nonatomic) IBOutlet UIButton *btnRemoveCover;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *layoutStopButtonHeight;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *layoutFutureStreamHeight;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *layoutFutureStreamBuffer;
@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (weak, nonatomic) UIImage *coverImage;
//CustomStreamCoverMenu *customCoverMenu;
@property (nonatomic) CustomStreamCoverMenu *customCoverMenu;
@property (nonatomic) TOCropViewController *cropController;
@property (nonatomic) UIImagePickerController *libraryPicker;
@property (nonatomic) PHAsset *assetFromLibrary;
@property (nonatomic) NSString *customCoverType;
@property (nonatomic) NSString *tmpCustomCoverAssetID;
@property (nonatomic) NSString *tmpCustomCoverFileName;
@property (nonatomic) NSString *tmpCustomCoverCreationDate;
@property (nonatomic) DeleteStreamView *deleteStreamView;
@property (nonatomic) DeleteStreamView *deleteStreamViewAnchored;
@property (weak, nonatomic) NSLayoutConstraint *conCurrentStreamHeight;
@property (nonatomic) NSArray *arrayGalleryAll;
@property (weak, nonatomic) IBOutlet UIView *contentViewForScrollView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *conDeleteAndFuture;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *conDeleteAndCurrent;
@property (weak, nonatomic) NSLayoutConstraint *conDeleteAndCover;

- (void) setViewsForState;
@end
