/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UIResponder, CalendarNotesCell;

@interface EKEventNotesInlineEditItem : EKEventEditItem <UITextViewDelegate> {
    CalendarNotesCell *_cell;
    UIResponder *_selectedTextField;
}

@property(retain) UIResponder * selectedResponder;


- (void)dealloc;
- (id)selectedResponder;
- (void)setSelectedResponder:(id)arg1;
- (id)selectedTextField;
- (float)defaultCellHeightForSubitemAtIndex:(int)arg1 forWidth:(float)arg2;
- (id)cellForSubitemAtIndex:(int)arg1;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (void)reset;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (BOOL)isInline;

@end