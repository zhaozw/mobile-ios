//
//  MenuTableViewSearchCell.h
//  Trovebox
//
//  Created by Patrick Santana on 07/03/13.
//  Copyright (c) 2013 Trovebox. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MenuTableViewSearchCell : UITableViewCell <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *labelSearch;
@end
