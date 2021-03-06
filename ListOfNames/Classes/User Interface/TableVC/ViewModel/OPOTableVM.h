//
//  OPOTableVM.h
//  ListOfNames
//
//  Created by Aleh Pachtovy on 8/26/18.
//  Copyright © 2018 Aleh Pachtovy. All rights reserved.
//

#import "OPOBaseVM.h"

@interface OPOTableVM : OPOBaseVM

-(NSInteger)numberOfItems;
-(NSString *)getItemNameFor:(NSInteger)index;

-(void)saveAddedName:(NSString *)name;
-(void)deleteItemFor:(NSInteger)index;

-(void)changeListSorting;
-(NSString *)getNameForSortButton;

@end
