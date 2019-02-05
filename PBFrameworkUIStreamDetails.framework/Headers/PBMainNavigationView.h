//
//  PBMainNavigationView.h
//  PBPodUIStreamDetails
//
//  Created by Michael Liptuga on 11/27/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSInteger, PBMainNavigationViewType) {
    PBDefaultNavigationViewType,
    PBPhotoAlbumNavigationViewType
};

@class PBMainNavigationView;

@protocol PBMainNavigationViewDataSource <NSObject>

- (PBMainNavigationViewType) navigationViewType;

@optional
- (NSString*) navigationViewTitle : (PBMainNavigationView*) navigationView;
- (UIColor*) navigationViewColor : (PBMainNavigationView*) navigationView;

- (BOOL) isHost : (PBMainNavigationView*) navigationView;
- (BOOL) isActiveStream : (PBMainNavigationView*) navigationView;

- (NSDate*) albumEndDate : (PBMainNavigationView*) navigationView;

- (NSString*) albumName : (PBMainNavigationView*) navigationView;
- (NSString*) albumId : (PBMainNavigationView*) navigationView;

- (NSDictionary*) album : (PBMainNavigationView*) navigationView;
- (NSDictionary*) folderDictionary : (PBMainNavigationView*) navigationView;

- (int) totalNumberPhotos : (PBMainNavigationView*) navigationView;

@end

@protocol PBMainNavigationViewDelegate <NSObject>

//@optional
- (void) photoStreamIsNotActive : (PBMainNavigationView*) navigationView;

- (void) dissmissViewController : (PBMainNavigationView*) navigationView;
- (void) shareButtonDidTouch : (PBMainNavigationView*) navigationView;
- (void) editButtonDidTouch : (PBMainNavigationView*) navigationView;
- (void) settingsButtonDidTouch : (PBMainNavigationView*) navigationView;
- (void) leaveStreamButtonDidTouch : (PBMainNavigationView*) navigationView;

@end

@interface PBMainNavigationView : UIView

@property (nonatomic, weak) IBOutlet UIViewController <PBMainNavigationViewDataSource> *currentViewController;

@property (nonatomic, weak) IBOutlet id<PBMainNavigationViewDelegate> delegate;

- (void) updateTitle;

- (void) update;

@end

NS_ASSUME_NONNULL_END
