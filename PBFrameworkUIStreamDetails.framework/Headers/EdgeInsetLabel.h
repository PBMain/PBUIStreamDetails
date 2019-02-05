//
//  EdgeInsetLabel.h
//  AFNetworking
//
//  Created by Michael Liptuga on 11/13/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EdgeInsetLabel : UILabel

@property (nonatomic, assign) UIEdgeInsets edgeInsets;

- (NSString *)truncatedText : (NSString*) text
                   userName : (NSString*) userName
                 dateString : (NSString*) dateString;

- (NSString *)fullText : (NSString*) text
              userName : (NSString*) userName
            dateString : (NSString*) dateString;

- (NSInteger) fit;

@end

NS_ASSUME_NONNULL_END
