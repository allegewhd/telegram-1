//
//  TGStickerPackModalView.h
//  Telegram
//
//  Created by keepcoder on 08.05.15.
//  Copyright (c) 2015 keepcoder. All rights reserved.
//

#import "TGModalView.h"

@interface TGStickerPackModalView : TGModalView

@property (nonatomic,assign) BOOL canSendSticker;

@property (nonatomic,weak) MessagesViewController *messagesViewController;

-(void)setStickerPack:(TL_messages_stickerSet *)stickerPack forMessagesViewController:(MessagesViewController *)messagesViewController;

@end
