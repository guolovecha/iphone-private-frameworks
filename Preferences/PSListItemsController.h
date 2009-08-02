/**
 * This header is generated by class-dump-z 0.1-11q.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "PSListController.h"

@class PSSpecifier;

@interface PSListItemsController : PSListController {
	int _rowToSelect;
	BOOL _deferItemSelection;
	PSSpecifier* _lastSelectedSpecifier;
}
-(void)scrollToSelectedCell;
-(void)setRowToSelect;
-(void)setValueForSpecifier:(id)specifier defaultValue:(id)value;
-(BOOL)preferencesTable:(id)table isRow:(int)row checkedInRadioGroup:(int)radioGroup;
-(BOOL)preferencesTable:(id)table isRadioGroup:(int)group;
-(void)listItemSelected:(id)selected;
-(void)_addStaticText:(id)text;
-(id)itemsFromParent;
-(id)itemsFromDataSource;
@end
