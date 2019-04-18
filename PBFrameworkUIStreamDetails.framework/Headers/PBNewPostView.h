//
//  PBNewPostView.h
//  AFNetworking
//
//  Created by Michael Liptuga on 11/7/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class PBNewPostView;

@protocol PBNewPostViewDelegate <NSObject>

@required

- (void) pbNewPostViewSendMessageButtonDidTouch :  (PBNewPostView*) pbNewPostView;

- (void) pbNewPostViewShowPhotoGalleryButtonDidTouch :  (PBNewPostView*) pbNewPostView;

@optional

- (void) pbNewPostViewRemoveMediaAtIndex : (NSInteger) index;

@end

@interface PBNewPostView : UIView

+ (instancetype) createForViewController : (UIViewController*) viewController
                           photoStreamId : (NSString*) photoStreamId;

+ (NSInteger) maxPhotosNumber;

//UITextView
@property (weak, nonatomic) IBOutlet UITextView *messageTextView;
@property (nonatomic, strong) NSMutableArray *photosToUpload;
@property (nonatomic, strong) NSString *streamID;
@property (nonatomic, strong) NSString *streamName;
@property (nonatomic, weak) id<PBNewPostViewDelegate> delegate;

- (void) subscribeToKeyboardNotifications;
- (void) unsubscribeFromNotifications;

- (void) addPhotosToPost : (NSArray*) photos;

- (void) clear;

@end

NS_ASSUME_NONNULL_END
