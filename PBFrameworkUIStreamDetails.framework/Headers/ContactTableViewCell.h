//
//  ContactTableViewCell.h
//  PhotoButler
//
//  Created by Mirant Patel on 11/08/16.
//  Copyright © 2016 blurbIQ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ContactTableViewCell : UITableViewCell
@property (strong, nonatomic) IBOutlet UIImageView *imgMain;
@property (strong, nonatomic) IBOutlet UILabel *lblMain;
@property (strong, nonatomic) IBOutlet UILabel *lblContact;
@property (strong, nonatomic) IBOutlet UIView *viewTable;
@end
