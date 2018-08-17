//
//  EditStreamDetailsViewController.h
//  PhotoButler
//
//  Created by Philippe Belley on 3/22/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StreamType) {
    CurrentStreamType = 0,
    FutureStreamType,
    ExpiredStreamType
};
@interface EditStreamDetailsViewController : UIViewController <UITextFieldDelegate, UIPickerViewDelegate, UIPickerViewDataSource>

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
@property (strong, nonatomic) IBOutlet UIDatePicker *datePicker;
@property (weak, nonatomic) IBOutlet UIPickerView *pickerView;
@property (nonatomic, assign) StreamType currentState;
@property (weak, nonatomic) IBOutlet UILabel *lblScheduledStreamTime;
@property (weak, nonatomic) IBOutlet UIView *viewShortenExtendContainer;
@property (weak, nonatomic) IBOutlet UILabel *lblCurrentStreamTime;
@property (weak, nonatomic) IBOutlet UIButton *btnExtend;
@property (weak, nonatomic) IBOutlet UILabel *lblExtend;
@property (weak, nonatomic) IBOutlet UIButton *extendButtonVisual;
@property (weak, nonatomic) IBOutlet UIButton *btnShorten;
@property (weak, nonatomic) IBOutlet UILabel *lblShorten;
@property (weak, nonatomic) IBOutlet UIButton *shortenButtonVisual;
@property (weak, nonatomic) IBOutlet UILabel *lblTimeNew;
@property (weak, nonatomic) NSDate *endManageDate;
@property (weak, nonatomic) NSDate *startManageDate;
@property (weak, nonatomic) NSDate *currentEndDate;
@property (weak, nonatomic) NSDate *currentStartDate;
@property (nonatomic) NSString *albumId;
@property (nonatomic) NSDictionary *album;
@property (nonatomic, assign) NSInteger timeModificationMultiplier;
@property (strong, nonatomic) NSMutableDictionary *callsToMake;
@property (atomic) NSRecursiveLock *lockSaveDict;
@property (nonatomic, assign) NSTimeInterval lengthOfScheduledStream;
@property (nonatomic, strong) UILabel *lblHours;
@property (nonatomic, strong) UILabel *lblMin;
@property (nonatomic) NSString* streamName;

- (void) setViewsForState;
@end
