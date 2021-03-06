/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import "NSObject.h"


@protocol UIWebSelectionBlock <NSObject>
-(id)webFrame;
-(CGRect)boundingRect;
-(id)parentBlock;
-(id)largerParent;
-(BOOL)isSameBlock:(id)block;
-(BOOL)containsBlock:(id)block;
-(BOOL)strictlyContainsBlock:(id)block;
-(BOOL)rendersAsBlock;
-(BOOL)selectable;
-(id)asDomNode;
-(id)asDomRange;
-(BOOL)containsRange:(id)range;
-(BOOL)canShrinkDirectlyToTextOnly;
-(id)rangeOfContents;
-(id)enclosingDocument;
@end

