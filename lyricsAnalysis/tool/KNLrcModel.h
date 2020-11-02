//
//  KNLrcModel.h
//  lyricsAnalysis
//
//  Created by mac on 2020/11/2.
//  Copyright © 2020 https://kunnan.blog.csdn.net. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
/**
 
 每句歌词的对象模型
 */
@interface KNLrcModel : NSObject
@property(nonatomic,assign) NSUInteger time;
@property(nonatomic,copy)NSString * lrc;


@end

NS_ASSUME_NONNULL_END
