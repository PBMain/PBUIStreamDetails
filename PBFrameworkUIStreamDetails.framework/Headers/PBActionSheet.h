//
//  PBActionSheet.h
//  PBPodUIStreamDetails
//
//  Created by Michael Liptuga on 11/20/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class PBActionSheet;

@protocol PBActionSheetDelegate <NSObject>

@optional

- (void) pbActionSheetCancel: (PBActionSheet*) actionSheet;
- (void) pbActionSheet: (PBActionSheet*) actionSheet clickedButtonAtIndex: (NSInteger) index;

@end

@interface PBActionSheet : UIView

@property (nonatomic, weak) id<PBActionSheetDelegate> delegate;

@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSString *cancelButtonTitle;

- (id)initWithTitle:(nullable NSString *)title
           delegate:(id)delegate
  cancelButtonTitle:(NSString *)cancelButtonTitle
  otherButtonTitles:(NSString *)otherButtonTitles, ... NS_REQUIRES_NIL_TERMINATION;

// Show the action sheet at current window
- (void)show;

// Hide the action sheeet.
- (void)hide;

- (void)setTitleColor:(UIColor*) color
             fontSize:(CGFloat) size;

- (void)setButtonsContentHorizontalAlignment: (UIControlContentHorizontalAlignment) horizontalAlignment
                           contentEdgeInsets: (UIEdgeInsets) contentEdgeInsets;

- (void)setCancelButtonTitleColor: (UIColor*) color
                          bgColor: (UIColor*) bgcolor
                             font: (UIFont*) font;

- (void)setButtonTitleColor: (UIColor*) color
                    bgColor: (UIColor*) bgcolor
                       font: (UIFont*) font
                    atIndex: (int) index;

- (void)setButtonsTitleColor: (UIColor*) color
                     bgColor: (UIColor*) bgcolor
                        font: (UIFont*) font;

- (void) addLeftImageIcon : (UIImage*) image
                imageSize : (CGSize) imageSize
                tintColor : (UIColor*) tintColor
           leftSideOffset : (CGFloat) leftSideOffset
                  atIndex : (int) index;

- (void) addRightImageIcon : (UIImage*) image
                 imageSize : (CGSize) imageSize
                 tintColor : (UIColor*) tintColor
           rightSideOffset : (CGFloat) rightSideOffset
                   atIndex : (int) index;

@end

NS_ASSUME_NONNULL_END
