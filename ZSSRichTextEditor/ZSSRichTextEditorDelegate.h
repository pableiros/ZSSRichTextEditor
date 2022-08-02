//
//  ZSSRichTextEditorDelegate.h
//  ZSSRichTextEditor
//
//  Created by pablo borquez on 01/08/22.
//  Copyright © 2022 Zed Said Studio. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol ZSSRichTextEditorDelegate <NSObject>

- (void)setBarButtonItemSelected: (NSString *)barButtonName;
- (void)setBarButtonItemDeselected: (NSString *)barButtonName;

@end

NS_ASSUME_NONNULL_END
