//
//  ModelTextFieldCell.h
//  modelcells
//
//  Created by Jeff Chang on 12/15/14.
//  Copyright (c) 2014 Jeff Chang. All rights reserved.
//

#import <UIKit/UIKit.h>

static NSString * const ModelTextFieldCellReuseIdentifier = @"ModelTextFieldCell";

@interface ModelTextFieldCell : UITableViewCell

@property (nonatomic, strong) IBOutlet UILabel *modelLabel;
@property (nonatomic, strong) IBOutlet UITextField *modelField;

@end
